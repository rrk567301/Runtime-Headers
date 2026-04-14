@class NSMutableSet;

@interface FPProcessGroupMinimal : NSObject {
    unsigned long long _hashValue;
}

@property (retain, nonatomic) NSMutableSet *processes;

- (void)addProcess:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initUniqueProcessGroup;

@end
