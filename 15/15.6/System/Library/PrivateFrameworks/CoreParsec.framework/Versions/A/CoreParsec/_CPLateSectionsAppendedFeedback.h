@class NSString, NSArray, NSData;

@interface _CPLateSectionsAppendedFeedback : PBCodable <_CPProcessableFeedback, _CPLateSectionsAppendedFeedback, NSSecureCoding> {
    unsigned long long _timestamp;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) unsigned long long timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long timestamp;
@property (copy, nonatomic) NSArray *sections;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearSections;
- (unsigned long long)sectionsCount;
- (void)addSections:(id)a0;
- (id)sectionsAtIndex:(unsigned long long)a0;
- (id)initWithFacade:(id)a0;

@end
