@class HDContentProtectionManager, _HKBehavior;

@interface HDDatabaseConfiguration : NSObject <NSCopying>

@property (retain, nonatomic) HDContentProtectionManager *contentProtectionManager;
@property (readonly, nonatomic) _HKBehavior *behavior;
@property (readonly, nonatomic) unsigned long long concurrentReaderLimit;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBehavior:(id)a0 concurrentReaderLimit:(unsigned long long)a1 contentProtectionManager:(id)a2;

@end
