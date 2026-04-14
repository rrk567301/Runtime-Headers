@class NSString, NSArray, NSMutableDictionary, AMSDialogRequest;

@interface AMSDialogResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) AMSDialogRequest *originalRequest;
@property (copy) NSString *selectedActionIdentifier;
@property (copy) NSArray *textfieldValues;
@property (retain) NSMutableDictionary *userInfo;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithOriginalRequest:(id)a0 selectedActionIdentifier:(id)a1;

@end
