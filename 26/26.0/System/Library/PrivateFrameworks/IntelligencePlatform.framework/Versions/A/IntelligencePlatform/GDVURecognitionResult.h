@class NSUUID, GDEntityIdentifier;

@interface GDVURecognitionResult : NSObject {
    void /* unknown type, empty encoding */ _tag;
}

@property (nonatomic, retain) GDEntityIdentifier *entityIdentifier;
@property (nonatomic, readonly) NSUUID *tag;
@property (nonatomic, readonly) float confidence;

- (id)init;
- (void).cxx_destruct;

@end
