@class NSString;

@interface LACAKSIdentityFlags : NSObject

@property (nonatomic, readonly) BOOL exists;
@property (nonatomic, readonly) BOOL migrated;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)initWithExists:(BOOL)a0 migrated:(BOOL)a1;

@end
