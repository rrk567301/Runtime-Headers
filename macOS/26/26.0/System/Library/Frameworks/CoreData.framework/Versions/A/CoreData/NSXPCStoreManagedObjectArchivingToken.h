@class NSURL;

@interface NSXPCStoreManagedObjectArchivingToken : NSObject <NSCoding, NSSecureCoding> {
    NSURL *_managedObjectReferenceURI;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)URI;
- (id)initWithURI:(id)a0;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
