@class NSString;

@interface AppStoreComponentsDaemonKit.JSModernLocObject : NSObject <_TtP27AppStoreComponentsDaemonKitP33_95C574A6F73E386171965476C49CFBED18JSLocObjectExports_> {
    void /* unknown type, empty encoding */ localizer;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *arcadeWordmarkAssetName;

- (id)init;
- (void).cxx_destruct;
- (id)formattedCount:(id)a0;
- (id)string:(id)a0;
- (id)fileSize:(id)a0;
- (id)relativeDate:(id)a0;
- (id)decimal:(id)a0 :(long long)a1;
- (id)formatDate:(id)a0 :(id)a1;
- (id)formatDateInSentence:(id)a0 :(id)a1 :(id)a2;
- (id)stringWithCount:(id)a0 :(long long)a1;
- (id)stringWithCounts:(id)a0 :(id)a1;
- (id)timeAgo:(id)a0;

@end
