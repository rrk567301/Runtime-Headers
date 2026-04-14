@class GEOPDSSessionUserActionMetadata;

@interface GEOSessionUserActionMetadata : NSObject {
    GEOPDSSessionUserActionMetadata *_actionMetadata;
    double _analyticsShortSessionCreateTime;
}

@property (readonly, nonatomic) GEOPDSSessionUserActionMetadata *sessionUserActionMetadata;

- (void).cxx_destruct;
- (id)init;
- (void)captureSearchAction:(int)a0 searchTarget:(int)a1 maxCountToMaintain:(unsigned long long)a2;

@end
