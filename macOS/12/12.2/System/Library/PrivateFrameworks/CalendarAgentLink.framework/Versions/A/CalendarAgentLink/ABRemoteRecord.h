@class NSString, NSArray, NSURL, NSDate;

@interface ABRemoteRecord : NSObject <NSSecureCoding> {
    NSURL *_persistentStoreURL;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *abAccountIdentifier;
@property (retain) NSDate *creationDate;
@property (retain) NSArray *customProperties;
@property BOOL isPartialObject;
@property (retain) NSDate *modificationDate;
@property long long personFlags;
@property (copy) NSString *uniqueId;
@property (retain) NSDate *builtDate;
@property (retain) id publicRecord;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
