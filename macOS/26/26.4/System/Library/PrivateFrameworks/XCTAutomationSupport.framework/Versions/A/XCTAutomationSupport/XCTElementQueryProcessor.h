@class XCTCapabilities;
@protocol XCTElementSnapshotProvider, XCTElementSnapshotAttributeDataSource;

@interface XCTElementQueryProcessor : NSObject

@property (retain) XCTCapabilities *remoteInterfaceCapabilities;
@property (readonly, weak) id<XCTElementSnapshotProvider, XCTElementSnapshotAttributeDataSource> dataSource;

- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (void)fetchMatchesForQuery:(id)a0 clientCapabilities:(id)a1 reply:(id /* block */)a2;

@end
