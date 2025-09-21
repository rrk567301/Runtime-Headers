@class NSString;

@interface ABCardViewLinkedPerson : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *fullName;
@property (readonly, copy, nonatomic) NSString *accountName;
@property (readonly) char unified;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly) char showName;
@property (readonly) char isPreferredForName;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithFullName:(id)a0 accountName:(id)a1 unified:(char)a2 identifier:(id)a3 showName:(char)a4 isPreferredForName:(char)a5;

@end
