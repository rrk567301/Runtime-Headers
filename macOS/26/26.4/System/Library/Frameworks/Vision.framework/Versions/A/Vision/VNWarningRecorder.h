@class NSString, NSMutableDictionary;

@interface VNWarningRecorder : NSObject <VNWarningRecorder> {
    NSMutableDictionary *_warnings;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _warningsLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)warnings;
- (void).cxx_destruct;
- (id)init;
- (void)setWarnings:(id)a0;
- (void)recordWarnings:(id)a0;
- (BOOL)hasWarnings;
- (void)recordWarning:(id)a0 value:(id)a1;
- (id)valueForWarning:(id)a0;

@end
