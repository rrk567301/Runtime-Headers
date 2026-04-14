@class NSAttributedString;

@interface FBKRequestRecord : DEDRequestRecord

@property (readonly) NSAttributedString *attrRequestHeader;
@property (readonly) NSAttributedString *attrResponseHeader;
@property (readonly) NSAttributedString *attrRequestBody;
@property (readonly) NSAttributedString *attrResponseBody;

- (id)description;
- (id)attributedStringAttributes;

@end
