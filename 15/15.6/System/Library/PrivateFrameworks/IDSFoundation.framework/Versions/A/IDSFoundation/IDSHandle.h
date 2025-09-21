@class IDSURI;

@interface IDSHandle : NSObject

@property (readonly, nonatomic) IDSURI *URI;
@property (readonly, nonatomic) char isUserVisible;
@property (readonly, nonatomic) long long validationStatus;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithURI:(id)a0 isUserVisible:(char)a1 validationStatus:(long long)a2;
- (char)isEqualToHandle:(id)a0;

@end
