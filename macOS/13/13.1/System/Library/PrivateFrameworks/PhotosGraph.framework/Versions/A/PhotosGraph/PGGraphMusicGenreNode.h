@class NSString;

@interface PGGraphMusicGenreNode : PGGraphPropertylessNode <PGGraphGenre> {
    NSString *_label;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned short)domain;
- (void).cxx_destruct;
- (id)label;
- (id)initWithLabel:(id)a0;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;

@end
