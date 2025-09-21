@class NSString, NSMutableDictionary;

@interface VNWarningRecorder : NSObject <VNWarningRecorder> {
    NSMutableDictionary *_warnings;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)warnings;
- (void)setWarnings:(id)a0;
- (void)recordWarnings:(id)a0;
- (char)hasWarnings;
- (void)recordWarning:(id)a0 value:(id)a1;
- (id)valueForWarning:(id)a0;

@end
