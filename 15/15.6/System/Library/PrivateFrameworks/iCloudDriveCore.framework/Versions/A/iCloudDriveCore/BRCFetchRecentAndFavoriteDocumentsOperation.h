@class NSString, BRCServerZone;

@interface BRCFetchRecentAndFavoriteDocumentsOperation : _BRCOperation <BRCOperationSubclass> {
    BRCServerZone *_serverZone;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)main;
- (char)shouldRetryForError:(id)a0;
- (id)createActivity;
- (unsigned int)_errorRetryType:(id)a0;
- (void)_performQueryOperationForBit:(unsigned int)a0 index:(id)a1 completion:(id /* block */)a2;
- (id)initWithServerZone:(id)a0 sessionContext:(id)a1;

@end
