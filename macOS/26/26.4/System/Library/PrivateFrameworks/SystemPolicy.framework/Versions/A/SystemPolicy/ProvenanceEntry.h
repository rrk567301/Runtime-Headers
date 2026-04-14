@class NSString, TrackingAttributes, NSURL, NSNumber;

@interface ProvenanceEntry : NSObject

@property (retain, nonatomic) NSNumber *uniqueID;
@property (retain, nonatomic) NSNumber *flags;
@property (readonly, nonatomic) TrackingAttributes *attributes;
@property (retain, nonatomic) NSNumber *rootID;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSString *teamID;
@property (retain, nonatomic) NSString *signingID;
@property (retain, nonatomic) NSString *cdhash;
@property (retain, nonatomic) NSString *bundleID;

- (void).cxx_destruct;
- (id)description;
- (id)redactedDescription;
- (id)createMetadata;

@end
