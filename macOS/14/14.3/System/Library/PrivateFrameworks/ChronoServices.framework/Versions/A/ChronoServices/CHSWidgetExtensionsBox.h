@class NSSet, NSData;

@interface CHSWidgetExtensionsBox : NSObject <CHSXPCEncodable> {
    NSData *_archivedData;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSSet *extensions;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithExtensions:(id)a0;
- (void)prepareForEncoding;

@end
