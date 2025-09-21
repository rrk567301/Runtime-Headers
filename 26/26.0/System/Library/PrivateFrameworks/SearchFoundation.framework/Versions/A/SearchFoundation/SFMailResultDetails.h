@class NSString, NSDictionary, NSData, NSNumber;

@interface SFMailResultDetails : NSObject <SFMailResultDetails, NSSecureCoding, NSCopying> {
    struct { unsigned char dataSources : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int dataSources;
@property (copy, nonatomic) NSNumber *suggestionScore;
@property (copy, nonatomic) NSNumber *skgMegadomeSpotlightIndexEntries;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)hasDataSources;

@end
