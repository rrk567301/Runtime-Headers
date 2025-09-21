@class NSString;

@interface WFUserVisibleString : NSObject {
    void /* unknown type, empty encoding */ comment;
    void /* function */ content;
}

@property (nonatomic, copy) NSString *content;
@property (nonatomic, readonly) BOOL isEmpty;
@property (nonatomic) unsigned long long kind;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *localizationComment;
@property (nonatomic, readonly) NSString *debugDescription;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithContent:(id)a0 ofKind:(unsigned long long)a1 comment:(id)a2;

@end
