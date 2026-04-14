@class NSString, NSMutableArray;

@interface CPProfileAdditionalWarningsHelper : NSObject {
    NSMutableArray *fWarnings;
    NSString *fPayloadUUID;
}

+ (id)helperForPayload:(id)a0 forProfile:(id)a1;

- (void)dealloc;
- (id)warnings;
- (id)initForPayload:(id)a0 forProfile:(id)a1;
- (void)addWarningWithTitle:(id)a0 message:(id)a1;

@end
