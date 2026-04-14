@class NSString;

@interface PKSharingDestination : NSObject <NSSecureCoding, NSCopying> {
    NSString *_destinationIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)_name;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)idsDestination;
- (id)initWithDestinationIdentifier:(id)a0;

@end
