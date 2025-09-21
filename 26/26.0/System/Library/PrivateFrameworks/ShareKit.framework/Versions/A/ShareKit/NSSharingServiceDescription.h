@class NSString, NSImage, NSFileHandle, NSURL, NSDictionary;

@interface NSSharingServiceDescription : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSImage *storedImage;
@property (retain, nonatomic) NSFileHandle *imageFileHandle;
@property (nonatomic) BOOL isSymbolImage;
@property (copy) NSString *plugInIdentifier;
@property (copy) NSURL *plugInURL;
@property (copy) NSDictionary *parameters;
@property long long order;
@property BOOL shouldDimSourceWindow;
@property BOOL viewBased;
@property unsigned long long mask;
@property BOOL enabled;
@property (copy) NSDictionary *serviceDictionary;
@property (copy) NSString *iconImageIdentifier;
@property BOOL isSymbolImageIdentifier;
@property BOOL isCollaborationSpecific;
@property BOOL allowInactive;
@property (copy) NSString *identifier;
@property (copy) NSString *title;
@property (copy) NSImage *image;

+ (id)serviceDescription;
+ (id)serviceDescriptionForExtension:(id)a0 collaborationIsPostShare:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)shkSharingService;
- (id)imageFromCoder:(id)a0;
- (id)_imageFromFileHandle;
- (void)encodeImage:(id)a0 withCoder:(id)a1;

@end
