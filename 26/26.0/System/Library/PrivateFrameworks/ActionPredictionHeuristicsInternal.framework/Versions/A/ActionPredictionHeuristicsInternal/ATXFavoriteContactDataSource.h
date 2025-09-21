@class ATXHeuristicDevice;

@interface ATXFavoriteContactDataSource : NSObject {
    ATXHeuristicDevice *_device;
}

- (id)initWithDevice:(id)a0;
- (void)favoritesWithContacts:(id)a0 callback:(id /* block */)a1;
- (void).cxx_destruct;

@end
