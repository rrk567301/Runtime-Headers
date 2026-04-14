@class NSNumber, NSString, NSData;

@interface MTROTAHeader : NSObject

@property (retain, nonatomic) NSNumber *vendorID;
@property (retain, nonatomic) NSNumber *productID;
@property (retain, nonatomic) NSNumber *payloadSize;
@property (retain, nonatomic) NSNumber *softwareVersion;
@property (retain, nonatomic) NSString *softwareVersionString;
@property (retain, nonatomic) NSString *releaseNotesURL;
@property (retain, nonatomic) NSData *imageDigest;
@property (nonatomic) unsigned long long imageDigestType;
@property (retain, nonatomic) NSNumber *minApplicableVersion;
@property (retain, nonatomic) NSNumber *maxApplicableVersion;

- (void).cxx_destruct;

@end
