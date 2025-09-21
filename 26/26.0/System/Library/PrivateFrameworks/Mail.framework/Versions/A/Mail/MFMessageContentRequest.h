@interface MFMessageContentRequest : NSObject {
    void /* unknown type, empty encoding */ scheduler;
    void /* unknown type, empty encoding */ objectID;
    void /* unknown type, empty encoding */ legacyMessage;
    void /* unknown type, empty encoding */ messageTransformer;
    void /* unknown type, empty encoding */ clientIdentifier;
    void /* unknown type, empty encoding */ options;
    void /* unknown type, empty encoding */ delegate;
}

+ (id)onScheduler:(id)a0 requestContentForObjectID:(id)a1 legacyMessage:(id)a2 messageTransformer:(id)a3 clientIdentifier:(id)a4 options:(id)a5 delegate:(id)a6 completionHandler:(id /* block */)a7;

- (id)init;
- (void).cxx_destruct;
- (id)initWithScheduler:(id)a0 objectID:(id)a1 legacyMessage:(id)a2 messageTransformer:(id)a3 clientIdentifier:(id)a4 options:(id)a5 delegate:(id)a6;

@end
