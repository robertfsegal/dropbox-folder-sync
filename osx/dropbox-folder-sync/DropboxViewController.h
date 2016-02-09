//
//  DropboxViewController.h
//  dropbox-folder-sync
//
//  Created by Robert Segal on 2016-02-07.
//  Copyright © 2016 Get Set Games Inc. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface DropboxViewController : NSViewController
@property (weak) IBOutlet NSSearchField *txtSearch;
@property (weak) IBOutlet NSScrollView *tblResults;

@end
