@class NSMutableSet;

@interface FPProcessGroupMinimal : NSObject {
    unsigned long long _hashValue;
}

@property (retain, nonatomic) NSMutableSet *processes;

- (id)init;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)addProcess:(id)a0;
- (void).cxx_destruct;
- (id)initUniqueProcessGroup;

@end
