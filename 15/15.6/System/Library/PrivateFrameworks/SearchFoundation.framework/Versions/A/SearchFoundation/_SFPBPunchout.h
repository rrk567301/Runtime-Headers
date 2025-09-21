@class NSString, NSArray, NSData, _SFPBUserActivityData;

@interface _SFPBPunchout : PBCodable <_SFPBPunchout, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSArray *urls;
@property (retain, nonatomic) _SFPBUserActivityData *userActivityData;
@property (copy, nonatomic) NSString *actionTarget;
@property (nonatomic) char isRunnableInBackground;
@property (nonatomic) char hasClip;
@property (nonatomic) char forceOpenInBrowser;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearUrls;
- (id)initWithJSON:(id)a0;
- (unsigned long long)urlsCount;
- (id)initWithFacade:(id)a0;
- (void)addUrls:(id)a0;
- (id)urlsAtIndex:(unsigned long long)a0;

@end
