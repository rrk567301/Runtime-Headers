@class NSArray, NSString;

@interface BMMediaRendered : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (nonatomic) char hasAbsoluteTimestamp;
@property (readonly, nonatomic) double absoluteTimestamp;
@property (readonly, nonatomic) NSArray *mediaAttributes;
@property (nonatomic) char hasIsOnScreen;
@property (readonly, nonatomic) char isOnScreen;
@property (nonatomic) char hasIsFirstView;
@property (readonly, nonatomic) char isFirstView;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)writeTo:(id)a0;
- (id)serialize;
- (id)initByReadFrom:(id)a0;
- (id)initWithAbsoluteTimestamp:(double)a0 mediaAttributes:(id)a1 isOnScreen:(char)a2 isFirstView:(char)a3;

@end
