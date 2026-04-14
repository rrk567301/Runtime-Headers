@class NSArray;

@interface NSCloudKitMirroringAcceptShareInvitationsRequest : NSCloudKitMirroringRequest {
    NSArray *_shareURLsToAccept;
    NSArray *_shareMetadatasToAccept;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)initWithOptions:(id)a0 completionBlock:(id /* block */)a1;
- (void)dealloc;

@end
