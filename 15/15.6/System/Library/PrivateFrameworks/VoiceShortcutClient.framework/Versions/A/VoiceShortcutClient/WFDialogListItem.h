@class NSString, WFImage, WFEncodedTypedValue;
@protocol WFPropertyListObject;

@interface WFDialogListItem : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) WFImage *image;
@property (nonatomic) char hideSubtitle;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) char selected;
@property (readonly, nonatomic) id<WFPropertyListObject> serializedPossibleState;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) char showingStaticContent;
@property (readonly, nonatomic) char hasImage;
@property (readonly, nonatomic) char hasSubtitle;
@property (readonly, nonatomic) char hasAltText;
@property (readonly, nonatomic) WFEncodedTypedValue *encodedTypedValue;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 identifier:(id)a2 image:(id)a3 selected:(char)a4 hideSubtitle:(char)a5 encodedTypedValue:(id)a6 serializedPossibleState:(id)a7;

@end
