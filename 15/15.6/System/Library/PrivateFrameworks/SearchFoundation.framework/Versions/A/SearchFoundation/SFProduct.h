@class NSString, NSDictionary, NSURL, NSData;

@interface SFProduct : NSObject <SFProduct, NSSecureCoding, NSCopying> {
    struct { unsigned char buyable : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *productIdentifier;
@property (copy, nonatomic) NSURL *availabilityURL;
@property (copy, nonatomic) NSString *displayName;
@property (nonatomic) char buyable;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (char)hasBuyable;

@end
