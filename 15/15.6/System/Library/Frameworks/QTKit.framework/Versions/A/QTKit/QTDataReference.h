@interface QTDataReference : NSObject <NSCoding, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

+ (void)initialize;
+ (id)dataReferenceWithDataRef:(char **)a0 type:(id)a1;
+ (id)dataReferenceWithDataRefData:(id)a0 type:(id)a1;
+ (id)dataReferenceWithProxy:(int)a0;
+ (id)dataReferenceWithReferenceToData:(id)a0;
+ (id)dataReferenceWithReferenceToData:(id)a0 name:(id)a1 MIMEType:(id)a2;
+ (id)dataReferenceWithReferenceToFile:(id)a0;
+ (id)dataReferenceWithReferenceToURL:(id)a0;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithProxy:(int)a0;
- (id)initWithDataRef:(char **)a0 type:(id)a1;
- (id)initWithDataRefData:(id)a0 type:(id)a1;
- (id)initWithReferenceToData:(id)a0;
- (id)initWithReferenceToData:(id)a0 name:(id)a1 MIMEType:(id)a2;
- (id)initWithReferenceToFile:(id)a0;
- (id)initWithReferenceToURL:(id)a0;

@end
