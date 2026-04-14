@class NSDictionary;

@interface IFExtractionElement : IFTaskElement {
    NSDictionary *_remoteExtractionBOMErrorDictionary;
}

- (long long)run;
- (id)description;
- (id)init;
- (id)logDescription;
- (void)dealloc;
- (void)_packageExtractionErrorNotificationHandler:(id)a0;
- (void)setInstallElement:(id)a0;

@end
