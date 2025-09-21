@class NSURL;

@interface NSXPCStoreManagedObjectArchivingToken : NSObject <NSCoding, NSSecureCoding> {
    NSURL *_managedObjectReferenceURI;
}

@property (class, readonly) char supportsSecureCoding;

- (void)dealloc;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)URI;
- (id)initWithURI:(id)a0;

@end
