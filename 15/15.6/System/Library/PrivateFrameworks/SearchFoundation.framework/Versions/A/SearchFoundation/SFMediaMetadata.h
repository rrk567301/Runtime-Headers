@class NSString, NSArray, NSDictionary, NSData;

@interface SFMediaMetadata : NSObject <SFMediaMetadata, NSSecureCoding, NSCopying> {
    struct { unsigned char mediaType : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *mediaName;
@property (nonatomic) int mediaType;
@property (copy, nonatomic) NSString *artistName;
@property (copy, nonatomic) NSString *albumName;
@property (copy, nonatomic) NSArray *mediaPunchouts;
@property (copy, nonatomic) NSArray *bundleIdentifiersToExclude;
@property (copy, nonatomic) NSString *disambiguationTitle;
@property (copy, nonatomic) NSString *mediaIdentifier;
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
- (char)hasMediaType;
- (id)initWithProtobuf:(id)a0;

@end
