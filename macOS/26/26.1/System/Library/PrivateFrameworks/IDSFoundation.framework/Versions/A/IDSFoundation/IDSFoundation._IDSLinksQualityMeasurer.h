@class NSString, NSData;

@interface IDSFoundation._IDSLinksQualityMeasurer : SwiftNativeNSObject <IDSLinkStatsPacketListener> {
    void /* unknown type, empty encoding */ links;
    void /* unknown type, empty encoding */ linksByUniqueID;
    void /* unknown type, empty encoding */ task;
    void /* unknown type, empty encoding */ lburst;
    void /* unknown type, empty encoding */ packetID;
    void /* unknown type, empty encoding */ timeFn;
    void /* unknown type, empty encoding */ report;
    void /* unknown type, empty encoding */ continuationsByPacketID;
}

- (id)init;
- (void)didReceiveStatsResponseWithID:(NSString *)a0 linkID:(char)a1 completionHandler:(void (^)(void))a2;
- (void)didReceiveStatsTestPacketWithPayload:(NSData *)a0 linkID:(char)a1 completionHandler:(void (^)(void))a2;
- (void)didSendStatsRequestWithID:(NSString *)a0 linkID:(char)a1 completionHandler:(void (^)(void))a2;

@end
