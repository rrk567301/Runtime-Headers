@class NSString, NSData, NSDate;

@interface FCUserEventHistorySession : NSObject {
    void /* function */ sessionID;
    void /* unknown type, empty encoding */ date;
    void /* unknown type, empty encoding */ kind;
}

@property (nonatomic, readonly) NSString *sessionID;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) NSString *fileName;
@property (nonatomic, readonly) NSString *path;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) NSData *compressedData;
@property (nonatomic, readonly) long long size;

+ (id)dateFromSessionID:(id)a0;

- (id)init;
- (id)initWithSessionID:(id)a0 path:(id)a1;
- (void).cxx_destruct;

@end
