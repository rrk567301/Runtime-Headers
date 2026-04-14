@class NSString, CADPredicate, ClientConnection, NSArray;

@interface CADBatchedFetchAgent : NSObject <CADClientAgent> {
    CADPredicate *_predicate;
    ClientConnection *_conn;
    NSArray *_databaseIDs;
    int _databaseIndex;
}

@property (readonly, nonatomic) unsigned int token;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
