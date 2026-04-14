@class NSData;

@interface ULGLogEntry : NSObject <ULGSchemaType> {
    void /* function */ payload;
}

@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned long long observedTimestamp;
@property (nonatomic, copy) NSData *payload;

- (id)serialize;
- (void).cxx_destruct;

@end
