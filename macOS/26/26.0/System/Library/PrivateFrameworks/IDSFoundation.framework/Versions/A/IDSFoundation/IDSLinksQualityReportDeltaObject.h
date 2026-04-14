@class IDSLinksQualityReportSyncTokenObject;

@interface IDSLinksQualityReportDeltaObject : NSObject {
    void /* unknown type, empty encoding */ delta;
}

@property (nonatomic, readonly) IDSLinksQualityReportSyncTokenObject *syncToken;

+ (id)createWithJSON:(id)a0 error:(id *)a1;

- (id)init;
- (void).cxx_destruct;
- (id)jsonWithError:(id *)a0;

@end
