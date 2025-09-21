@class NSString, NSDictionary, NSURL, NSImage;

@interface NSSharingServiceDescription : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy) NSString *plugInIdentifier;
@property (copy) NSURL *plugInURL;
@property (copy) NSDictionary *parameters;
@property long long order;
@property char shouldDimSourceWindow;
@property char viewBased;
@property unsigned long long mask;
@property char enabled;
@property (copy) NSDictionary *serviceDictionary;
@property (copy) NSString *identifier;
@property (copy) NSString *title;
@property (copy) NSImage *image;

+ (id)serviceDescription;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)imageFromCoder:(id)a0;
- (void)encodeImage:(id)a0 withCoder:(id)a1;

@end
