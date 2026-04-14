@class NSString;

@interface ABCardViewLinkedPerson : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *fullName;
@property (readonly, copy, nonatomic) NSString *accountName;
@property (readonly) BOOL unified;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly) BOOL showName;
@property (readonly) BOOL isPreferredForName;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithFullName:(id)a0 accountName:(id)a1 unified:(BOOL)a2 identifier:(id)a3 showName:(BOOL)a4 isPreferredForName:(BOOL)a5;

@end
