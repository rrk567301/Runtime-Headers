@class NSURL;

@interface NSXPCStoreManagedObjectArchivingToken : NSObject <NSCoding, NSSecureCoding> {
    NSURL *_managedObjectReferenceURI;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithURI:(id)a0;
- (id)URI;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
