@class NSString;
@protocol TSUStreamReadChannel;

@interface TSPComponentReader : TSPReader <TSPComponentParserDelegate> {
    id<TSUStreamReadChannel> _readChannel;
    struct { unsigned char isReadingFromDocument : 1; unsigned char ignoreUnknownContent : 1; unsigned char ignoreVersionChecking : 1; unsigned char hasIncompatibleVersion : 1; unsigned char acceptUnknownDocumentObject : 1; } _flags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)beginReadingWithCompletionQueue:(id)a0 completion:(id /* block */)a1;
- (char)componentParser:(id)a0 didReadArchiveInfo:(const void *)a1 stream:(struct DispatchDataInputStream { void /* function */ **x0; id x1; unsigned long long x2; unsigned long long x3; id x4; unsigned long long x5; char *x6; } *)a2 error:(id *)a3;
- (void)didUnarchiveObject:(id)a0 withUnarchiver:(id)a1;
- (id)initWithComponent:(id)a0 finalizeHandlerQueue:(id)a1 delegate:(id)a2;
- (id)initWithComponent:(id)a0 finalizeHandlerQueue:(id)a1 delegate:(id)a2 readChannel:(id)a3;
- (id)initWithComponent:(id)a0 finalizeHandlerQueue:(id)a1 delegate:(id)a2 readChannel:(id)a3 ignoreUnknownContent:(char)a4 ignoreVersionChecking:(char)a5;
- (id)newUnarchiverWithArchiveInfo:(const void *)a0 stream:(struct DispatchDataInputStream { void /* function */ **x0; id x1; unsigned long long x2; unsigned long long x3; id x4; unsigned long long x5; char *x6; } *)a1 isUnknownObject:(char *)a2;
- (id)newUnarchiverWithObjectIdentifier:(long long)a0 messageInfo:(const void *)a1 unarchiveClass:(Class)a2 message:(void *)a3 messageVersion:(unsigned long long)a4 strongReferences:(struct unique_ptr<TSP::IdentifierMap<bool>, std::default_delete<TSP::IdentifierMap<bool>>> { struct __compressed_pair<TSP::IdentifierMap<bool> *, std::default_delete<TSP::IdentifierMap<bool>>> { void *x0; } x0; })a5 unknownContent:(id)a6 hasAlternateMessages:(char)a7;
- (char)shouldProceedParsingOnFailure;
- (id)unknownMessageFromMessageInfo:(const void *)a0 stream:(struct DispatchDataInputStream { void /* function */ **x0; id x1; unsigned long long x2; unsigned long long x3; id x4; unsigned long long x5; char *x6; } *)a1;
- (const void *)unknownObjectMessageInfo;
- (id)unknownObjectUnarchiverWithArchiveInfo:(const void *)a0 stream:(struct DispatchDataInputStream { void /* function */ **x0; id x1; unsigned long long x2; unsigned long long x3; id x4; unsigned long long x5; char *x6; } *)a1 ignoreMessageData:(char)a2 hasAlternateMessages:(char)a3;

@end
