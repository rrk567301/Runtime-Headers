@class NSMutableSet;

@interface FPProcessGroupMinimal : NSObject {
    unsigned long long _hashValue;
}

@property (retain, nonatomic) NSMutableSet *processes;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addProcess:(id)a0;
- (id)initUniqueProcessGroup;

@end
