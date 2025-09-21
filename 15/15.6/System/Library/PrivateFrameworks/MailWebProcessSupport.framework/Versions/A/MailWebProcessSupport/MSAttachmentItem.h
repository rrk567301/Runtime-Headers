@class NSString, NSData, UTType;

@interface MSAttachmentItem : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *contentID;
@property (readonly, nonatomic) UTType *uttype;
@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, copy, nonatomic) NSString *additionalMarkup;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithContentID:(id)a0 uttype:(id)a1 data:(id)a2 additionalMarkup:(id)a3;

@end
