@class NSObject;
@protocol NSCopying;

@interface PXStoryConcreteChapterCollectionChapterModification : NSObject <PXStoryChapterCollectionChapterModification>

@property (readonly, nonatomic) NSObject<NSCopying> *editedChapterIdentifier;
@property (readonly, nonatomic) id /* block */ chapterChangeRequest;
@property (readonly, nonatomic) long long kind;

- (void).cxx_destruct;
- (id)init;
- (id)initWithEditedChapterIdentifier:(id)a0 chapterChangeRequest:(id /* block */)a1;

@end
