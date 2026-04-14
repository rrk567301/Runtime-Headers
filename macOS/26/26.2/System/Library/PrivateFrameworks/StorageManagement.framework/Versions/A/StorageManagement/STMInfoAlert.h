@class NSString;

@interface STMInfoAlert : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *recommendationIdentifier;
@property (copy) NSString *storageItemIdentifier;
@property (copy) NSString *title;
@property (copy) NSString *message;
@property (copy) NSString *actionButtonTitle;
@property BOOL isActionButtonDestructive;
@property (copy) NSString *cancelButtonTitle;
@property (copy) NSString *helpAnchor;
@property (copy) NSString *helpBook;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
