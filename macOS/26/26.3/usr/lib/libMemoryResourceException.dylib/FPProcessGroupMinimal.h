@class NSMutableSet;

@interface FPProcessGroupMinimal : NSObject {
    unsigned long long _hashValue;
}

@property (retain, nonatomic) NSMutableSet *processes;

- (void)addProcess:(id)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initUniqueProcessGroup;

@end
