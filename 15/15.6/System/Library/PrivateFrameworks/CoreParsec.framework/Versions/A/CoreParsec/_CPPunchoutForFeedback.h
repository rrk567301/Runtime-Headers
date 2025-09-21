@class NSString, NSArray, NSData;

@interface _CPPunchoutForFeedback : PBCodable <_CPPunchoutForFeedback, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSArray *urls;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) int knownBundleIdentifier;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichBundleid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearUrls;
- (unsigned long long)urlsCount;
- (id)initWithFacade:(id)a0;
- (void)addUrls:(id)a0;
- (void)clearBundleid;
- (id)urlsAtIndex:(unsigned long long)a0;

@end
