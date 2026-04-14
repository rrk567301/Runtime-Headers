@class NSString;

@interface CKVDevice : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL isLocal;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToDevice:(id)a0;
- (id)initWithIdentifier:(id)a0 isLocal:(BOOL)a1;

@end
