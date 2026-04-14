@class NSString, NSArray, UXID;

@interface UXItem : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) UXID *identifier;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (weak, nonatomic) UXItem *parent;
@property (retain, nonatomic) NSArray *children;
@property (nonatomic) BOOL titleIsUserEditable;
@property (nonatomic) BOOL subTitleIsUserEditable;
@property (retain, nonatomic) NSString *artworkID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToItem:(id)a0;

@end
