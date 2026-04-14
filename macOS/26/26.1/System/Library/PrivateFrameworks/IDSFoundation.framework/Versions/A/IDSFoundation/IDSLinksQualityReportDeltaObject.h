@class IDSLinksQualityReportSyncTokenObject;

@interface IDSLinksQualityReportDeltaObject : NSObject {
    void /* unknown type, empty encoding */ delta;
}

@property (nonatomic, readonly) IDSLinksQualityReportSyncTokenObject *syncToken;

+ (id)createWithJSON:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)init;
- (id)jsonWithError:(id *)a0;

@end
