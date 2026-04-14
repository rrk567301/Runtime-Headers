@class NSArray;

@interface CHIPGeneralDiagnosticsClusterHardwareFaultChangeEvent : NSObject

@property (retain, nonatomic) NSArray *current;
@property (retain, nonatomic) NSArray *previous;

- (id)init;
- (void).cxx_destruct;

@end
