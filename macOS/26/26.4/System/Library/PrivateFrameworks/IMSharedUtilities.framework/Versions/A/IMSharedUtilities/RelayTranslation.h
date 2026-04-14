@class NSString, NSArray;

@interface RelayTranslation : NSObject <NSSecureCoding, NSCoding> {
    void /* function */ sourceLocaleIdentifier;
    void /* function */ destinationLocaleIdentifier;
    void /* function */ messages;
    void /* function */ requestID;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSString *sourceLocaleIdentifier;
@property (nonatomic, readonly) NSString *destinationLocaleIdentifier;
@property (nonatomic, readonly) NSArray *messages;
@property (nonatomic, readonly) NSString *requestID;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)createDictionaryWithStringProcessing:(id /* block */)a0;
- (id)initWithType:(long long)a0 sourceLocaleIdentifier:(id)a1 destinationLocaleIdentifier:(id)a2 messages:(id)a3 requestID:(id)a4;

@end
