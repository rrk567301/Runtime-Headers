@class NSString, NSURL;

@interface REMReminderExtractionInput : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSURL *url;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithInputText:(id)a0;
- (id)initWithInputText:(id)a0 inputURL:(id)a1;
- (id)initWithInputURL:(id)a0;

@end
