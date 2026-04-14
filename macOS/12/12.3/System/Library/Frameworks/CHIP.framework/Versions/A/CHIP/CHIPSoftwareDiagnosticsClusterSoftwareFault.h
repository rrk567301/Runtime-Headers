@class NSNumber, NSString, NSData;

@interface CHIPSoftwareDiagnosticsClusterSoftwareFault : NSObject

@property (retain, nonatomic) NSNumber *id;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSData *faultRecording;

- (id)init;
- (void).cxx_destruct;

@end
